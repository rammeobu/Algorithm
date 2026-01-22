def solution(wallet, bill):
    answer = 0
    wallet_x,wallet_y = wallet[0],wallet[1]
    bill_x,bill_y = bill[0],bill[1]
    while min(bill_x,bill_y) > min(wallet_x,wallet_y) or max(wallet_x,wallet_y)  < max(bill_x,bill_y) :

        if bill_x>bill_y:
            bill_x//=2
        else:
            bill_y//=2
        answer+=1
    return answer
