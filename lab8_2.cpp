char findGrade(double score) {
    if (score > 90) {
        return 'A';
    } else if (score > 75) {
        return 'B';
    } else if (score > 60) {
        return 'C';
    } else if (score > 45) {
        return 'D';
    } else {
        return 'F';
    }
}