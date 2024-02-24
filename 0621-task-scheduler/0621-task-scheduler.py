from collections import defaultdict 

class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        cooldown = dict()
        taskDict = defaultdict(int)
        for task in tasks:
            taskDict[task] += 1
        taskDict = dict(sorted(taskDict.items(), key = lambda x: x[1], reverse=True))
        totalCycles = 0
        while len(taskDict.keys()) > 0:
            totalCycles += 1
            for k in list(cooldown.keys()):
                cooldown[k] -= 1
                if cooldown[k] <= 0:
                    del cooldown[k]
            #print(cooldown)
            #print(taskDict)
            for task, i in taskDict.items():
                if task not in cooldown.keys():
                    #print(task)
                    cooldown[task] = n + 1
                    taskDict[task] -= 1
                    if taskDict[task] <= 0:
                        del taskDict[task]
                    taskDict = dict(sorted(taskDict.items(), key = lambda x: x[1], reverse=True))
                    break
            

                    
        return totalCycles
                