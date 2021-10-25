## All about git
---

### Extension
1. Git [LFS][git-lfs]
   > Head directly to [github help][gh-git-lfs]

[git-lfs]: https://git-lfs.github.com/
[gh-git-lfs]: https://help.github.com/en/github/managing-large-files


2. Workflow
  1. [What is a good Git workflow?](workflow1)
    > [visual tutorial](https://guides.github.com/introduction/flow/) on github workflow

[workflow1]: https://git-scm.com/book/tr/v2/Git-Tools-Rewriting-History "Better use official"

2. Commit.
  1. [Art of Commit](commit1)
  1. [Undoing and Editing Commits](commit1)
  1. Drop a commit [forcefully](https://stackoverflow.com/questions/1338728/delete-commits-from-a-branch-in-git)? use [cherry-pick](https://www.clock.co.uk/insight/deleting-a-git-commit)?

[commit1]: http://alistapart.com/article/the-art-of-the-commit?utm_source=hashnode.com "The Art of the commit by David Demaree"
[commit2]: https://www.oreilly.com/library/view/git-pocket-guide/9781449327507/ch04.html

3. Stash
  - [Using the Stash Command][stash1]
     > Stash is a carrier of changes from branch to branch
     > stash work like *array*, it have `list` , `pop`, and `apply`.
     > by convention pop will drop last item from stash list, but it have `drop` too.

[stash1]: https://www.youtube.com/watch?v=KLEDKgMmbBI

4. Branch
  1. [Using branch][using-branch]
  1. Intro to branching and merging<br>
  [![](https://img.youtube.com/vi/FyAAIHHClqI/0.jpg)](https://www.youtube.com/watch?v=FyAAIHHClqI)
  1. Delete local or remote branch [git-tower](branch1)
      - local
			  `git branch -D feature/login`

      - remote (that you have access)
		 	  `git push origin --delete feature/login`

[using-branch]: https://www.atlassian.com/git/tutorials/using-branches
[branch1]: https://www.git-tower.com/learn/git/faq/delete-remote-branch

5. Rebase
  1. [rebase tutorial](rebase2)
  1. [official rebase](rebase1)
  1. [dont-be-scared-of-git-rebase](rebase3)<br>
      - squash several commit into one
    - Rapidly changing the message on a series of commits

  1. [guide for rebase](rebase4)
    > summary

  1. a video suggested by @lucasfcosta<br>
[![](https://img.youtube.com/vi/SxzjZtJwOgo/0.jpg)](https://www.youtube.com/watch?v=SxzjZtJwOgo)
     > unwatched

[rebase1]: https://git-scm.com/book/tr/v2/Git-Tools-Rewriting-History "Better use official"
[rebase2]: http://rypress.com/tutorials/git/rebasing "tutorial based rebase"
[rebase3]: https://nathanleclaire.com/blog/2014/09/14/dont-be-scared-of-git-rebase/
[rebase4]: https://code.tutsplus.com/tutorials/rewriting-history-with-git-rebase--cms-23191
[rebase-video1]: https://www.youtube.com/watch?v=SxzjZtJwOgo

6. Common
  <details><summary>common content</summary>

    1. [How can I delete a file from git repo?](common1)<br>
    1. [What are the differences between 'git pull' and 'git fetch'?](common2)
    1. [git show-ref](common3)
    1. [ignore file](common4)
    1. [undo modification of one file](common5)
    1. [Please, oh please, use git pull --rebase](common6)
    1. [getting solid at git rebase vs merge](common7)
    1. [git guide no deep shit :)](common8)
    1. [SO QA tag or branch](common9)
    1. clone specific branch
      > git clone -b [branch] [remote_repo]

    1. Use git as to [deploy][git-auto-deploy] your code on vps. alternatively when you store [repo DO][auto-deploy-do]

    1. git log
      > the log of commits, starting from HEAD, and traversing through each connected commit. It’ll start from HEAD and go to the next commit in the chain, then the commit attached to that, etc.  by [joenash][joenashProfile]

    1. git reflog
      > reflog on the other hand is all the commits, not just ones currently connected to HEAD. This is what makes reflog such a powerful tool: it retains commits even once they’ve been revised, reverted or removed. by [joenash][joenashProfile]

    1. [Git rebase interactive the last n commits][commmon10]
    1. [Revert multiple git commits][common11]
    1. [Change commit author at one specific commit][common12]

  </details>


[common1]: http://stackoverflow.com/questions/2047465/how-can-i-delete-a-file-from-git-repo "stackoverflow questions"
[common2]: http://stackoverflow.com/questions/292357/what-are-the-differences-between-git-pull-and-git-fetch "stackoverflow question"
[common3]: https://git-scm.com/docs/git-show-ref
[common4]: https://help.github.com/articles/ignoring-files/ "on our beloved github"
[common5]: http://stackoverflow.com/questions/692246/undo-working-copy-modifications-of-one-file-in-git
[common6]: https://coderwall.com/p/7aymfa/please-oh-please-use-git-pull-rebase
[common7]: https://medium.com/@porteneuve/getting-solid-at-git-rebase-vs-merge-4fa1a48c53aa#.fa8ctsh9o
[common8]: http://rogerdudler.github.io/git-guide/ "no deep shit"
[common9]: http://stackoverflow.com/questions/1457103/how-is-a-tag-different-from-a-branch-which-should-i-use-here
[joenashProfile]: https://github.com/joenash
[commmon10]: https://stackoverflow.com/questions/41464752/git-rebase-interactive-the-last-n-commits
[common11]: https://stackoverflow.com/questions/1463340/revert-multiple-git-commits
[common12]: https://stackoverflow.com/questions/3042437/change-commit-author-at-one-specific-commit
[auto-deploy-do]: https://www.digitalocean.com/community/tutorials/how-to-set-up-automatic-deployment-with-git-with-a-vps
[git-auto-deploy]: https://medium.com/@francoisromain/vps-deploy-with-git-fea605f1303b

6. [Subtree][git-subtree-intro]

[git-subtree-intro]: https://www.atlassian.com/git/tutorials/git-subtree

6. Config
  1. Core Editor, on [github help](config1)
    > hate vim, need the GUI text editor?

    > `git config --global core.editor "path/to/text/editor"`

  1. [Git asks for username every time I push][config2]

[config1]: https://help.github.com/articles/associating-text-editors-with-git/
[config2]: https://stackoverflow.com/questions/11403407/git-asks-for-username-every-time-i-push

7. Half Unknown
  1. [rebase branch][half1]
  1. [detached HEAD][half2]
  1. [Fix a Git detached head?][half3]
  1. [Undoing changes][half4]
    > reset vs revert

[half1]: https://stackoverflow.com/questions/14893399/rebase-feature-branch-onto-another-feature-branch
[half2]: https://stackoverflow.com/questions/5772192/how-can-i-reconcile-detached-head-with-master-origin
[half3]: https://stackoverflow.com/questions/10228760/fix-a-git-detached-head
[half4]: https://www.atlassian.com/git/tutorials/undoing-changes

8. [Glossary](https://jk.gs/gitglossary.html)
