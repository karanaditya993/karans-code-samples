function arrange(sentence) {
    let cachedSentence = sentence;
    let sorted = sentence.split(' ').sort((a, b) => {
        if (a.length === b.length && cachedSentence.indexOf(a) > cachedSentence.indexOf(b)) {
            return true;
        }
        return a.length - b.length;
    });
}

arrange('Aibohphobia is a joke term used to describe the fear of palindromes.');
