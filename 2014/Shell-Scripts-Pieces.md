

- printenv PATH # like echo $PATH, but seems more professional

- tr '[:lower:]' '[:upper:]'

- Define Functions
```
usage ()
{
	cat <<EOF
some illustrations
here
A huge File Descriptino
EOF
}
```

- Parse Parameters
```
for arg in $@; do
    case $arg in
        -h|--help)
            usage
            exit 0
            ;;
    esac
done


if [ $# -gt 2 ] ; then
    echo "ERROR: expecting 2 parameters. Please see option --help"
    exit 1
fi

require_tool $@
```

- Read
```
    read "a?$1 [y/N] "
    if [[ $a == "N" || $a == "n" || $a = "" ]]; then
        return 0
    fi
    return 1
```

- tput cols



- You Should  man these
```
man test

```

- Skills
    - printf '\033[0;34m%s\033[0m\n' "Upgrading Oh My Zsh" (better looking than inlined color prompt)


- Words You should know
    - source: source /etc/profile
    - profile
    - ack-grep

- Words You should Google

 