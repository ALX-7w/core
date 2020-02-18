# ALX-7w/core

>_There is nothing impossible to him who will try._  
>― Alexander the Great

<img src="https://miro.medium.com/max/3466/1*baa4JB2I-AS67YhDuiIkLw.jpeg"/>

## Summary
* [Project description](#description)  
* [Good to know - Where to begin the hacking part](#good-to-know)
* [Compilation - How to launch the project 🚀](#compilation)

___

### Description

This project is the core of ALX program.  
It executes all processes in the right order, for ALX to play and learn usefull strategies for the board game [7 Wonders](https://fr.wikipedia.org/wiki/7_Wonders).

___

### Good to know

#### Dependencies

To be able to re-use our own dependencies, we splited them in differents projects. And we're using [git submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules) to implement those in the main core project.

If you are about to get the project, you'll need to pass the `--recurse-submodules` option to `git clone`.  
__So the final command is(in https):__
```
git clone --recurse-submodules https://github.com/ALX-7w/core.git
```
With that command, it should clone ALX-7w/core project with all its submodules in deps directory.

__To pull all project and submodules changes from the project remote:__
```
git pull --recurse-submodules
```
__or:__
```
git submodule update --init --recursive
```

_The next section is important if you plan to make changes on submodules in from this project_
> So now, you have the submodules well set in the project but there is still an issue you could run into.  
After one of the previous command, your submodules are in a “detached HEAD” state. This means that there is no local working branch (like master, for example) tracking changes. With no working branch tracking changes, that means even if you commit changes to the submodule, those changes will quite possibly be lost the next time you run `git submodule update`.

First you'll need to checkout a branch in the submodule:
```
cd deps/<submodule>
git checkout some-marvelous-branch
```
Then you can commit your changes to this local branch, and finally from the base project:
```
git push --recurse-submodules=on-demand
```
> The `=on-demand` argument will try to push all submodules commits in the core project before its own.  
 The `check` option will make push simply fail if any of the committed submodule changes haven’t been pushed and renders some nice advices of what to do next.

__For more info on submodules, explore [gictionary](https://git-scm.com/book/en/v2/Git-Tools-Submodules).__

___

#### Compilation

_This project is mainly coded in C++17, and using [CMake 3,15](https://cmake.org/cmake/help/v3.15/) to create an optimized executable._

__To create a generic Makefile with CMake:__
```
cmake .
```
__To compile all files:__
```
make
```

___