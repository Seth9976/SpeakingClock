// 函数: sub_49801f
// 地址: 0x49801f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
*arg3 += arg3.b
void* entry_ebx
*(entry_ebx + 0x56) += arg2.b
int32_t var_14 = *arg3
void var_10
void* edi = &var_10
void* esi_1 = &arg3[4]
*edi = *esi_1
*(edi + 2) = *(esi_1 + 2)
int32_t esi_5 = sub_497e94() - 1

if (esi_5 s>= 0)
    int32_t i_1 = esi_5 + 1
    int32_t ebx = 0
    int32_t i
    
    do
        void var_c
        sub_497ea0(ebx, &var_c)
        
        if (sub_497ef8(&var_14, &var_c) != 0)
            return sub_497ea0(ebx, arg2)
        
        ebx += 1
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
