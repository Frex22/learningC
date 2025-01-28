# learningC
Learning and practicing C

Steps to initialize a git repo and clone repo

aakash32@Aakash:~/cproj$ git clone git@github.com:Frex22/learningC.git
Cloning into 'learningC'...
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.
Please make sure you have the correct access rights
and the repository exists.


#this means that the key is not added to /home/.ssh/id_rsa which means the local pc does not know that key that was generated had to be used so do this


we see the dellkwy lets go ahead and add it, add pub key to github and private key to id_rsa


aakash32@Aakash:~/cproj$ ls
calculator    cproj    dellkwy.pub  first.c       second    tempconv
calculator.c  dellkwy  first        gradecheck.c  second.c  tempconv.c

we go ahead with ssh-add and it doesnt work which mostly means it hasnt be initialized.

aakash32@Aakash:~/cproj$ ssh-add ~/cproj/dellkwy
Could not open a connection to your authentication agent.
aakash32@Aakash:~/cproj$
aakash32@Aakash:~/cproj$

#run this to initialize ssh agent

aakash32@Aakash:~/cproj$ eval "$(ssh-agent -s)"
Agent pid 3963
aakash32@Aakash:~/cproj$ ssh-add ~/cproj/dellkwy
Identity added: /home/aakash32/cproj/dellkwy (aakash32@Aakash)
aakash32@Aakash:~/cproj$ ssh-add -l
2048 SHA256:uo0Za0st5SiyY9J4inbM/xDCcWm2mhHlYJx33gHxNg0 aakash32@Aakash (RSA)
aakash32@Aakash:~/cproj$
aakash32@Aakash:~/cproj$
aakash32@Aakash:~/cproj$
aakash32@Aakash:~/cproj$ git clone git@github.com:Frex22/learningC.git
Cloning into 'learningC'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (3/3), done.



and clone again its done.

