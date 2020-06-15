# Language: C++
# Input: FNA
# Output: FNA
# Tested with: PluMA 1.0, GCC 4.8.4

PluMA plugin to run AbundanceBin (Wu et al, 2011).

The plugin accepts as input a FASTA file of sequences
and uses the recursive option to avoid specifying
the number of clusters beforehand.

Output data consists of multiple files, prefixed by
the input filename.

The plugin relies on the abundancebin application being
in the system PATH.
