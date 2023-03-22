---
tags:
- platform/linux
- filesystem/cow
---
# BTRFS
## Docs
https://archive.kernel.org/oldwiki/btrfs.wiki.kernel.org/
## Development
https://archive.kernel.org/oldwiki/btrfs.wiki.kernel.org/index.php/Development_setup.html
https://archive.kernel.org/oldwiki/btrfs.wiki.kernel.org/index.php/Btrfs_source_repositories.html
https://github.com/btrfs/btrfs-dev-docs
https://archive.kernel.org/oldwiki/btrfs.wiki.kernel.org/index.php/Debugging_Btrfs_with_GDB.html
## btrfs-progs
List subvolumes under path
```
sudo btrfs subvolume list "${DIR}"
```
```
sudo btrfs property set -ts "${DIR}" ro false
```
```
sudo btrfs check --force "${DEV}"
```