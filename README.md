# University-Examination-Timetabling-Problem

Περιγραφή προβλήματος

Ο χρονοπρογραμματισμός εξετάσεων Πανεπιστημίου εξετάζεται εδώ και χρόνια από πολλούς ερευνητές ως προς τις τεχνικές που θα επιφέρουν τα πιο βέλτιστα αποτελέσματα. Τα προβλήματα χρονοπρογραμματισμού εξετάσεων ανήκουν στην κατηγορία προβλημάτων πολυπλοκότητας NP-hard,πράγμα που σημαίνει ότι οι ακριβείς μέθοδοι δεν είναι σε θέση να λύσουν προβλήματα με μεγέθη πρακτικής σημασίας. Δεδομένης της πολυπλότητας, τα προβλήματα προγραμματισμού που εμφανίζονται στην καθημερινότητα σε πραγματικές καταστάσεις όπως και ο χρονοπρογραμματισμός εξετάσεων Πανεπιστημίου , μπορεί συχνά να μοντελοποιηθούν ως προβλήματα χρωματισμού γραφημάτων. Ο χρωματισμός γραφήματος είναι η διαδικασία ανάθεσης χρωμάτων σε κάθε κορυφή ενός γραφήματος G έτσι ώστε καμία γειτονική κορυφή να μην έχει το ίδιο χρώμα. Ο στόχος είναι να ελαχιστοποιηθεί ο αριθμός των χρωμάτων ενώ χρωματίζετε ένα γράφημα.Έστω V ο αριθμός κορυφών, οι οποίες σχηματίζουν ένα συνδεδεμένο γράφημα, ο στόχος είναι να χρωματιστεί κάθε κορυφή έτσι ώστε εάν δύο κορυφές συνδέονται στο γράφημα (γειτονικές κορυφές) θα χρωματιστούν με διαφορετικά χρώματα.  Ο μικρότερος αριθμός χρωμάτων που απαιτούνται για να χρωματίσει ένα γράφημα G ονομάζεται χρωματικός αριθμός αυτού του γραφήματος. Το πρόβλημα χρωματισμού γραφήματος είναι πρόβλημα NP Complete. Δεδομένου ότι ο χρονοπρογραμματισμός των εξετάσεων είναι ένας τύπος προβλήματος προγραμματισμού που έχει πολυπλοκότητα NP-hard, έτσι πολλοί ερευνητές έχουν διερευνήσει στοχαστικές μεθόδους όπως ευρετικές και μετα-ευρετικές προσεγγίσεις για να βρουν βέλτιστες ή σχεδόν βέλτιστες λύσεις. Στην διεθνη βιβλιογραφία έχουν προταθεί τεχνικές επίλυσης όπως Graph based sequential Techniques,Constraint based techniques,Local search techniques και Population Based techniques. Τα δεδομένα του προβλήματος είναι τα Toronto datasets τα οποία αποτελούνται απο 13 περπτώσεις προβλημάτων. Ο στόχος του προβλήματος είναι να αντιστοιχιστεί ένα σύνολο εξετάσεων σε ένα σύνολο περιόδων με τέ΄τοι τρόπο έτσι ώστε να ικανοποιείται ένα σύνολο περιορισμών. Οι περιορισμοί που αντιμετωπίζουμε ο "σκληρός" περιορισμός όπου δεν πρέπει να υπάρχουν φοιτητές που συμμετέχουν σε περισσότερα απο ένα μαθήματα την ίδια περίοδο, και ο "μαλακός" όπου περιλαμβάνει την εξάπλωση των εξετάσεων σε ολόκληρη την εξεταστική περίοδο αλλά ορίζοντας τις ποινές 6, 8, 4, 2 ή 1 σε κάθε περίπτωση που ένας φοιτητής συμμετέχει σε δύο εξετάσεις που απέχουν 1, 2, 3, 4 ή 5 περιόδους αντίστοιχα. Ευρετικοί αλγόριθμοι όπως ο FIRST FIT, DSATUR και RLF είναι απο τους πιο ευρέως χρησιμοποιημένους αλγόριθμους πού έχουν επιφέρει ικανοποιητικά αποτελέσματα ως προς την κατα προσέγγιση επίλυση ενός NP-hard πολυπλοκότητας προβλήματος.Ο First Fit, γνωστός και ως Greedy Coloring είναι η ευκολότερη και ταχύτερη τεχνική όλων των Greedy Coloring ευρετικών αλγορίθμων χρωματίζοντας οποιαδήποτε κορυφή με το πρώτο διαθέσιμο χρώμα ξεκινώντας από οποιαδήποτε αυθαίρετη κορυφή. Η ιδέα πίσω από τον DSATUR είναι να χρωματιστεί μια κορυφή με τον μεγαλύτερο αριθμό χρωμάτων που χρησιμοποιούνται από τις γειτονικές κορυφές, με σκοπό να γίνει ο συνολικός αριθμός χρωμάτων που χρησιμοποιούνται όσο το δυνατόν μικρότερος.. Ο αλγόριθμος RLF χρωματίζει τις κορυφές σε φθίνουσα σειρά σύμφωνα με τον βαθμό κορυφής, ο οποίος ορίζεται ως αριθμός των κορυφών που συνδέεται μια κορυφή. 