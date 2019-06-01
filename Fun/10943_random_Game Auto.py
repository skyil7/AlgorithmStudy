from selenium import webdriver
import keyboard
import time

#크롬 드라이버로 크롤러 객체 설정
driver = webdriver.Chrome('chromedriver.exe')
driver.get('https://www.acmicpc.net/login?next=%2F')

password = input("password : ")

#Login
driver.find_element_by_name('login_user_id').send_keys('skyil7')
driver.find_element_by_name('login_password').send_keys(password)
driver.find_element_by_class_name('btn-u').click()

while(True):
    #Goto Problem 10943
    driver.get('https://www.acmicpc.net/submit/10943')

    keyboard.write('#include <iostream>\nusing namespace std;\n\n//problem from https://www.acmicpc.net/problem/10943\nint main()\n{\n	cout << 7;\n\n	return 0;')
    time.sleep(1)

    driver.find_element_by_css_selector('button#submit_button').click()

    result = driver.find_element_by_css_selector('span.result-wa').text
    if result == '틀렸습니다':
        print('retry!')
        time.sleep(72)
        continue
    else:
        break

print('finished!')