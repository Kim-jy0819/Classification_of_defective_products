# -*- coding: utf-8 -*-
"""
Created on Wed Mar 31 23:41:06 2021

@author: charl
"""

import serial
import time
ard=serial.Serial('COM3' , 9600) # 포트번호 확인, 통신속도 확인

while(1):
    time.sleep(1)
    c=''
    c='A' # 여기에 'A', 'B','C' 각각 하나씩 집어넣어서 작동하는지 확인해봐!
    if c=='q':
        break
    else:
        c=c.encode('utf-8')
        ard.write(c)

