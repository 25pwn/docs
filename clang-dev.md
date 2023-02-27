---
tags: llvm c c++ compiler
---
# Clang
# Usage

# Development
## [Clone and build LLVM/clang](https://llvm.org/docs/GettingStarted.html)
```
git clone --depth=1 --shallow-submodules https://github.com/llvm/llvm-project.git

mkdir llvm-project-build
cd llvm-project-build

cmake -G "Unix Makefiles" \
-DLLVM_ENABLE_PROJECTS=clang \
-DCMAKE_BUILD_TYPE=Release \
../llvm-project/llvm
make

bin/clang -v
```
## [llvm-tutor](https://github.com/banach-space/llvm-tutor)
## [Write a new pass](https://llvm.org/docs/WritingAnLLVMNewPMPass.html)
