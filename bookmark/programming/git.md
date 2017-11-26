## All about git
---

1. Workflow
   1. [What is a good Git workflow?](workflow1)
      > [visual tutorial](https://guides.github.com/introduction/flow/) on github workflow
[workflow1]: https://git-scm.com/book/tr/v2/Git-Tools-Rewriting-History "Better use official"

2. Rebase
   1. [rebase tutorial](rebase2)
   1. [official rebase](rebase1)
   1. [dont-be-scared-of-git-rebase](rebase3)<br>
 	    - squash several commit into one
      - Rapidly changing the message on a series of commits

   1. [guide for rebase](rebase4)
      > summary
   1. [rebase video][rebase-video1] suggested by @lucasfcosta

[rebase1]: https://git-scm.com/book/tr/v2/Git-Tools-Rewriting-History "Better use official"
[rebase2]: http://rypress.com/tutorials/git/rebasing "tutorial based rebase"
[rebase3]: https://nathanleclaire.com/blog/2014/09/14/dont-be-scared-of-git-rebase/
[rebase4]: https://code.tutsplus.com/tutorials/rewriting-history-with-git-rebase--cms-23191
[rebase-video1]: https://www.youtube.com/watch?v=SxzjZtJwOgo
3. Commit.

   1. [Art of Commit](commit1)

[commit1]: http://alistapart.com/article/the-art-of-the-commit?utm_source=hashnode.com "The Art of the commit by David Demaree"

4. Branch
   1. Delete local or remote branch [git-tower](branch1) <br>
	    - local
			  `git branch -D feature/login`

		  - remote (that you have access)
		 	  `git push origin --delete feature/login`

[branch1]: https://www.git-tower.com/learn/git/faq/delete-remote-branch

5. Common
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

   1. git log
      > the log of commits, starting from HEAD, and traversing through each connected commit. It’ll start from HEAD and go to the next commit in the chain, then the commit attached to that, etc.  by [joenash][joenashProfile]

   1. git reflog
      > reflog on the other hand is all the commits, not just ones currently connected to HEAD. This is what makes reflog such a powerful tool: it retains commits even once they’ve been revised, reverted or removed. by [joenash][joenashProfile]

   1. [Git rebase interactive the last n commits][commmon10]
   1. [Revert multiple git commits][common11]
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
6. Config
	 1. Core Editor, on [github help](config1)
      > hate vim, need the GUI text editor?

      `git config --global core.editor "path/to/text/editor"`

[config1]: https://help.github.com/articles/associating-text-editors-with-git/

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
7. [Glossary](https://jk.gs/gitglossary.html)
