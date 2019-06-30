#problem from https://www.acmicpc.net/problem/15904

import re
f = re.search('U.*C.*P.*C',input())
if f:
    print('I love UCPC')
else:
    print('I hate UCPC')