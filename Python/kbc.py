questions = [
    "What is 2 + 2? ",
    "What is the capital of India? ",
    "How many days are in a week? ",
    "What is 5 * 5? ",
    "Which language are we learning? ",
    "what is 20*55^3 ?",
]
answers = ["4", "delhi", "7", "25", "python","3327500",]

score = 0


for i in range(6):
    answer = input(questions[i])

    if answer.lower() == answers[i]:
        score = score + 1
    else:
        score = score


def final_score(score):
    print("Your score is:", score, "/ 64"
    "")

    if score == 4 or score==5 or score == 6:
        print("Excellent")
    else:
        print("Keep Practicing")


final_score(score)