// 函数: sub_461234
// 地址: 0x461234
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = *(arg2 + 4)

if (result u< 0x100 || result u> 0x109)
    int32_t ecx = *(arg2 + 4)
    
    if (ecx != 0xb000 && ecx != 0xb001 && *(arg2 + 4) != 0xb016 && *(arg2 + 4) != 0xb017
            && *(arg2 + 4) != 0x111)
        int32_t esi_1 = *(arg2 + 4)
        
        if ((esi_1 u<= 0x200 || esi_1 u> 0x20a) && *(arg2 + 4) != 0xa0)
            return 0

result.b = 1
return result
