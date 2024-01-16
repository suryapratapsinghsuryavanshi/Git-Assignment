# Git-Assignment | Documentation
- Clone the Remot Repository to local
```bash
git clone https://github.com/suryapratapsinghsuryavanshi/Git-Assignment.git
```

- Create a new branch
```bash
git branch source
```

- Switch to the new branch
```bash
git checkout source
```

- Create a new file
```bash
touch fibonacci.c
```

- Add the file to staging area
```bash
git add fibonacci.c
```

- Commit the changes
```bash
git commit -m "Added fibonacci.c"
```

- Push the changes to remote repository
```bash
git push origin source
```

- After stisfying with the changes, merge the changes to master branch
```bash
git checkout master
git merge source
```

- Push the changes to remote repository
```bash
git push origin master
```

- Delete the branch
```bash
git branch -d source
```

- Create a new file
```bash
touch run.sh
```

- Add the file to staging area
```bash
git add run.sh
```

- Commit the changes
```bash
git commit -m "Added run.sh"
```

- Push the changes to remote repository
```bash
git push origin master
```
