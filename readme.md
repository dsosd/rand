# Collection of random code snippets that are currently up for adoption

Once a snippet is adopted, the file will be removed in a commit, with a line in "redirect_locations" specifying where its new home is.

ex. foo/bar/dir/file gets adopted
```
rm foo/bar/dir/file
echo "foo/bar/dir/file -> dsosd/repo" >>redirect_locations
```

There may be duplicate keys in "redirect_locations" at some point in the future.
