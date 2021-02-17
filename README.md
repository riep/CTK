# README #

This repository contains all the repositories of Certis Solution stored as submodules.
It allows to use the right version of each repository to avoid incompatibilities.

### First clone ###
The first time you clone this repo please enter the following commands:
```
git submodule init
git submodule update
```

### How to use this repo ? ###

This repository contains a new commit for each new origin/development branch pushed in each submodule.
In other words, a commit must be created each time a branch is merged in a submodule.

For instance, a reviewer has to merge a branch from a developer into origin/development of CertisViewerApp repo:
  - In *CertisViewerApp* repo: The reviewer merges the branch into origin/development by simply clicking on the Merge button in bitbucket
  - In *CertisSolution* repo:
    - the reviewer fetches the last update and checkout the current origin/development branch:
    ```
    git fetch
    git submodule update
    git checkout -B development origin/development
    ```
    - the reviewer creates a new commit:
        - it must contain the new origin/development branch of CertisViewerApp repo
        - it must explain quickly what was merged in CertisViewerApp repo
    - the reviewer pushes development branch: **push force should NEVER be required**

Naturally the same steps must be followed when a reviewer merges a branch in gadgetron or licensing submodule.
