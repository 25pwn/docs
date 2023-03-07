---
tags:
- platform/linux
- filesystem/cow
---
# BTRFS
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