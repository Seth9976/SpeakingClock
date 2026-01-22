// 函数: sub_472be4
// 地址: 0x472be4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT result = sub_460cf4(arg1)

if (*(arg1 + 0x277) == 1)
    result = data_4b1ce0
    
    if (*(result + 0x44) != 0)
        result = *(data_4b1ce0 + 0x44)
        
        if (*(result + 0x29c) != 0)
            return SendMessageA(*(*(data_4b1ce0 + 0x44) + 0x29c), 0x234, 0, 0)

return result
