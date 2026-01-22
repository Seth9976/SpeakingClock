// 函数: sub_498040
// 地址: 0x498040
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_1c = *arg1
void var_18
void* edi = &var_18
void* esi_1 = &arg1[1]
*edi = *esi_1
*(edi + 2) = *(esi_1 + 2)
int32_t esi_5 = sub_497e94() - 1

if (esi_5 s>= 0)
    int32_t i_1 = esi_5 + 1
    int32_t ebx_1 = 0
    int32_t i
    
    do
        void var_14
        sub_497ea0(ebx_1, &var_14)
        
        if (sub_497ef8(&var_1c, &var_14) != 0)
            return sub_497ea0(ebx_1, arg2)
        
        ebx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg2 = data_4abe18
int32_t* result
result.w = data_4abe1c
arg2[1].w = result.w
result.b = data_4abe1e
*(arg2 + 6) = result.b
return result
