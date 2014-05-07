Naming Conventions
==================

ob, obarray














Functions
=========

(make-symbol "foo") ==> make one
(intern "foo") ==> get one
(defcustom ...)



(defun fun2 (&key ((myoption var))) (print var))
(fun2 'myoption "good")
