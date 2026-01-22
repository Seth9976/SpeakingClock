// 函数: sub_498f74
// 地址: 0x498f74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax_1
int32_t ecx
int32_t ecx_1
eax_1, ecx_1 = sub_498b20(ecx, arg2)
char eax_3
int32_t ecx_2
eax_3, ecx_2 = sub_498780(ecx_1, arg2)
char eax_5
int32_t ecx_3
eax_5, ecx_3 = sub_498a38(ecx_2, arg2)
char eax_7
int32_t ecx_4
eax_7, ecx_4 = sub_498aac(ecx_3, arg2)
char eax_9
int32_t ecx_5
eax_9, ecx_5 = sub_49870c(ecx_4, arg2)
char eax_11
int32_t ecx_6
eax_11, ecx_6 = sub_498b94(ecx_5, arg2)
int32_t** eax_13
int32_t result
eax_13, result = sub_498c08(ecx_6, arg2)
void var_20
sub_497f34(eax_9, eax_11, eax_13, &var_20, eax_7, eax_5, eax_3, eax_1)
int32_t edi_1 = sub_41ae58(*(arg1 + 0x50)) - 1

if (edi_1 s>= 0)
    int32_t i_1 = edi_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        void var_18
        sub_497bdc(sub_497cbc(*(arg1 + 0x50), esi_1), &var_18)
        
        if (sub_497ef8(&var_18, &var_20) != 0)
            return sub_497cbc(*(arg1 + 0x50), esi_1)
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
