---
tags:
- os/linux/archlinux
- platform/linux
---
# Archlinux
## Packaging

On `archlinux`, packages are defined by [`PKGBUILD`](https://man.archlinux.org/man/PKGBUILD.5) files and built using [`makepkg`](https://man.archlinux.org/man/makepkg.8.en) into `${package_name}.pkg.tar.zst` files.

`.pkg` files are hosted on repositories defined by `${repo_name}.db` and `${repo_name}.files` files, which can be manipulated with [`repo-add` and `repo-remove`](https://man.archlinux.org/man/repo-add.8).

`.pkg` files can be installed, removed etc. using [`pacman`](https://man.archlinux.org/man/pacman.8.en).

https://man.archlinux.org/man/PKGBUILD.5

https://man.archlinux.org/man/repo-add.8