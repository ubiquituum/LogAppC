# GIT COMMANDS

## GIT STUFF

`git add FILE`
    adds a file to a git repo

`git init`
    initalises a git repository

`git status`
    details the files that have been either not commited OR modified

`git diff`
    shows what files have been changed or added since last commit

`git commit -a`
    commits ALL files in a git repository

`git commit (-m "MESSAGE" -F FILE)`
    commits a git directory with -m for a string message and -F for a message from a file

`git rm FILENAME`
     removes a file from working directory

`git reset`
     resets staging area to last commit

`git restore --staged`
    takes a file from staged and moves it back to working directory

`git restore FILE`
    recover a removed or moved file

`git mv /path/to/FILE1 /path/to/FILE2`
    moves one file to another file/directory

`git log`
    logs commit history

`git log -p`
    logs commit history with changes

`git reset COMMITID`
    returns to a previous commit [I THINK{maybe}]

`git rebase`
    complicated

`git branch BRANCH`
    makes a new branch

`git switch BRANCH`
    switches the active branch to another branch

`git merge (-m "MESSAGE" -F FILE) BRANCH`
    merges BRANCH to the active branch with -m being a string message and -F being a message from file

`git branch -d BRANCH`
    deletes a branch

`git switch -c BRANCH`
    switches to a new branch BRANCH that doesn't exist prior

## GITHUB STUFF

`git remote add origin LINK_TO_GH_REPO`
    adds a remote git location thing

`git branch -M BRANCH`
    moves stuff

`git push -u origin BRANCH`
    pushes an upstream branch to a remote git location thing for a certain BRANCH

