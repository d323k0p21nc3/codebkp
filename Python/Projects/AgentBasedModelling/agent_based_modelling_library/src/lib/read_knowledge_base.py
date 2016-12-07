import json


def get_json(file):
    knowledge = ""
    with open('../knowledge_base/'+file) as f:
        for line in f:
            knowledge += str(line)
    return json.loads(knowledge)
