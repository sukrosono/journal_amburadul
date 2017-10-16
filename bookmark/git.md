## All about git
---

  1. Workflow
     2. [What is a good Git workflow?](https://help.github.com/articles/what-is-a-good-git-workflow/)
     > [visual tutorial](https://guides.github.com/introduction/flow/) on github workflow

  0. Rebase
	 	 1. [official rebase](https://git-scm.com/book/tr/v2/Git-Tools-Rewriting-History "Better use official")

     1. [rebase tutorial](http://rypress.com/tutorials/git/rebasing "tutorial based rebase")

	   1.  [dont-be-scared-of-git-rebase](https://nathanleclaire.com/blog/2014/09/14/dont-be-scared-of-git-rebase/)<br>
	 	   >-  squash several commit into one

	     >-  Rapidly changing the message on a series of commits

	 	   >-  

  0. Commit.

    1. [Art of Commit](http://alistapart.com/article/the-art-of-the-commit?utm_source=hashnode.com "The Art of the commit by David Demaree")

  0. Branch
		 1.  Delete local or remote branch [git-tower](https://www.git-tower.com/learn/git/faq/delete-remote-branch)

		 		 - local

				 	 `git branch -D feature/login`

				 - remote (that you have access)

				 	 `git push origin --delete feature/login`

  0. Common

    1. [How can I delete a file from git repo?](http://stackoverflow.com/questions/2047465/how-can-i-delete-a-file-from-git-repo "stackoverflow questions")
    1. [What are the differences between 'git pull' and 'git fetch'?](http://stackoverflow.com/questions/292357/what-are-the-differences-between-git-pull-and-git-fetch "stackoverflow question")
    1. [git show-ref](https://git-scm.com/docs/git-show-ref)
    1. [ignore file](https://help.github.com/articles/ignoring-files/ "on our beloved github")
    1. [undo modification of one file](http://stackoverflow.com/questions/692246/undo-working-copy-modifications-of-one-file-in-git)
    1. [Please, oh please, use git pull --rebase](https://coderwall.com/p/7aymfa/please-oh-please-use-git-pull-rebase)
    1. [getting solid at git rebase vs merge](https://medium.com/@porteneuve/getting-solid-at-git-rebase-vs-merge-4fa1a48c53aa#.fa8ctsh9o)
    1. [git guide no deep shit :)](http://rogerdudler.github.io/git-guide/)
    1. [SO QA tag or branche](http://stackoverflow.com/questions/1457103/how-is-a-tag-different-from-a-branch-which-should-i-use-here)
    1.  clone specific branch
    	  > git clone -b [branch] [remote_repo]

  0.  Config
    1.  Core Editor, on [github help](https://help.github.com/articles/associating-text-editors-with-git/)
	      > hate vim, need the GUI text editor?
	  		`git config --global core.editor "path/to/text/editor"`

  0.  [Glossary](https://jk.gs/gitglossary.html)
