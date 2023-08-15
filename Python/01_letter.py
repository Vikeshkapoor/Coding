a='''<|Address|>

<|Date|>

Dear <|Name|>,

We all are fine here. I hope you are also fine. My birthday falls on 16th september. My parents decided to celebrate my birthday at home. 

I have invited our classmates and some other friends. You will have a chance to meet some old friends also. We will have fun. I will wait for you.

Yours sincerely

Vikesh
'''
city=input("Name of your city:")
date=input("Enter date:")
name=input("What is your name:")
a=a.replace("<|Address|>",city)
a=a.replace("<|Date|>",date)
a=a.replace("<|Name|>",name)

print(a)
