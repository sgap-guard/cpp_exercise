# 贡献指南

欢迎为本仓库提交代码、习题、修改建议！
本仓库存放C++练习题原题目及代码，采用MIT协议，所有提交的代码都将遵循 [MIT License](./LICENSE)。

## 贡献流程（Fork + Pull Request）
### 1. 下载git-for-windows
[git-for-windows官网](https://git-for-windows.github.io/)

[git-for-windows镜像站](https://mirrors.nju.edu.cn/github-release/git-for-windows/git/)

### 2. Fork 仓库
1. 访问本仓库主页，点击右上角 **Fork**，将仓库复制到你自己的 GitCode 账号下。
2. 等待Fork完成，进入**你账号下的副本仓库**。

### 3. 将 Fork 后的仓库克隆到本地
打开Git Bash，执行下面命令，替换成你自己fork仓库的地址：
```bash
git clone https://gitcode.com/你的用户名/CPP练习题.git
cd CPP练习题
```

### 4. 配置上游仓库（重要！用来同步我的仓库最新代码）
> `origin`：你自己fork后的仓库
> `upstream`：本主仓库（原仓库）
```bash
# 添加上游仓库，替换为本仓库HTTPS地址
git remote add upstream https://gitcode.com/sgap_guard/cpp_exercise.git
```

> 检查远程仓库配置：
```bash
git remote -v
```

### 5. 创建新分支（不要直接在main分支修改！）
**每次新增习题/修改代码，都新建独立分支**
```bash
# 创建并切换到新分支，分支名建议：add/xxx题目 或 fix/xxxbug
git checkout -b add/2026-cpp-exercise
```

### 6. 修改代码
- 新增cpp习题放到合适目录；
- 编译产物（exe、obj等）不要提交，本仓库`.gitignore`已经配置；
- 代码尽量规范，简单写注释说明题目；
- 不要提交系统临时文件、VSCode个人调试配置。

### 7. 提交代码
```bash
git add .
git commit -m "feat: 添加C++习题【xxx题目名称】"
git push origin add/2026-cpp-exercise
```

> 提交信息规范参考：
> - `feat:` 新增题目/功能
> - `fix:` 修复代码bug
> - `docs:` 修改文档、README
> - `refactor:` 重构代码，不改变逻辑

### 8. 在GitCode网页发起 Pull Request（PR）
1. 打开你自己Fork仓库页面，会提示有新分支，点击 **Create Pull Request**
2. 目标仓库：选择**原仓库main分支**，源分支：你的新分支
3. PR标题简明；描述写清楚：新增了哪道题 / 修改了什么内容
4. 提交PR，等待仓库所有者（我）review、审核合并。

## 同步主仓库最新代码（提交PR前建议做一次）
原仓库有更新时，同步到你本地fork仓库：
```bash
# 拉取主仓库最新代码
git fetch upstream
# 合并主仓库main分支到本地main
git checkout main
git merge upstream/main
# 切回你的开发分支，合并main最新代码
git checkout add/2026-cpp-exercise
git merge main
```
> 如果出现冲突，手动解决冲突后，再add、commit、push。

## 提交规范
1. 只提交`.cpp`/`.md`源码，**禁止上传exe、编译产物**；
2. 尽量一个PR只做一件事：新增一道题 / 修复一处bug，不要一次性堆大量无关修改；
3. 代码尽量可编译运行；
4. 提交前检查：不要提交个人`.vscode`调试配置、Thumbs.db等垃圾文件。

## 常见问题
1. PR冲突：先执行上面【同步主仓库最新代码】，在本地解决冲突后再推送。
2. 不小心在main分支修改：新建分支保存改动，main分支重置。
3. 提交了不该提交的文件：使用`git rm --cached 文件名`取消追踪。

## 许可说明
提交代码即代表你同意你的代码按照本仓库 MIT License 开源协议。

