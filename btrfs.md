---
tags: linux-kernel filesystem
---
# BTRFS
## btrfs-progs
List subvolumes under path
```
sudo btrfs subvolume list "${DIR}"
```
```
btrfs property set -ts "${DIR}" ro false
```