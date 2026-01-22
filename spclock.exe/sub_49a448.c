// 函数: sub_49a448
// 地址: 0x49a448
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

RECT var_24
var_24.left = *arg2
var_20
void* edi = &var_20
void* esi_1 = &arg2[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
char result = sub_49a970(arg1)

if (result == 0)
    char eax_2 = (*(*arg1 + 0x154))()
    
    if (eax_2 != 0)
        void var_14
        sub_418a3c(0, 0, &var_14)
        void* var_28 = &var_14
        arg1[0x94]
        result = (*(*arg1 + 0x180))(0, var_28)
    
    if (eax_2 == 0 || result == 0)
        sub_42bbb0(*(arg1[0x94] + 0x14), arg1[0x1c])
        sub_42bcec(*(arg1[0x94] + 0x14), 0)
        return sub_42c258(arg1[0x94], &var_24)

return result
