---
tags: version-control
---
# git
## Usage
[man git](https://man7.org/linux/man-pages/man1/git.1.html)

[man giteveryday](https://man7.org/linux/man-pages/man7/giteveryday.7.html)

git init
```
echo "# dep_priv" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin ${ORIGIN}
git push -u origin main
```
```
git init
git commit -m --allow-empty --allow-empty-message
git branch -M main
git remote add origin ${ORIGIN}
git push -u origin main
```

```
git clone
```
Shallow Clones

```
git clone --depth=1 --shallow-submodules
```

Create a shallow clone instead of a full clone

To convert to a full clone, run `git fetch --unshallow`
