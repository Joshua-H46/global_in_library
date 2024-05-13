This example illustrates how dynamic linking works.

In this example, we build 5 dynamic libraries and our app as below:

            app
           /   \
        lib1   lib2
        /  \   /  \
     lib3   lib4   lib5 -- call func()

And in lib5 we call `func`. The function `func` has multiple definitions in different libraries and the app.
The problem is, which `func` is called in lib5?