// 函数: sub_467ce8
// 地址: 0x467ce8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_1c
sub_41caa0(arg2, &var_1c, 4)
void var_20
sub_41caa0(arg2, &var_20, 4)
int32_t edx_2
edx_2.b = 1
int32_t* eax_2 = sub_430618(sub_42a104+0x140, edx_2)
int32_t* var_54 = &var_4
int32_t (* var_58)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = sub_41c874(arg2)
(*(*eax_2 + 0x54))(ExceptionList, var_58, var_54)
int32_t eax_8
int32_t edx_4
edx_4:eax_8 = sx.q(var_1c + eax_4)
sub_41c894(arg2, eax_8, edx_4)
int32_t edx_5
edx_5.b = 1
int32_t* ExceptionList_1 = sub_430618(sub_42a104+0x140, edx_5)
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
(*(*ExceptionList_1 + 0x54))(ExceptionList_1, j_sub_40443c, &var_4)
int32_t edx_7
edx_7.b = 1
int32_t* eax_12 = sub_430618(sub_42a104+0x140, edx_7)
*(arg1 + 0x34)
(*(*eax_12 + 0x40))(arg1)
*(arg1 + 0x30)
(*(*eax_12 + 0x34))()
int32_t edx_10
edx_10.b = 1
int32_t* eax_17 = sub_430618(sub_42a104+0x140, edx_10)
sub_431be0(eax_17, 1)
*(arg1 + 0x34)
(*(*eax_17 + 0x40))()
*(arg1 + 0x30)
(*(*eax_17 + 0x34))()
void var_34
sub_418a64(*(arg1 + 0x34), 0, 0, &var_34, *(arg1 + 0x30))
sub_46833c(arg1)
int32_t* var_c_4 = &var_4
int32_t (* var_10_4)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t eax_29
int32_t edx_16
edx_16:eax_29 = sx.q((*(*var_c_4 + 0x20))(ExceptionList_1, var_10_4, var_c_4))

if (divs.dp.d(edx_16:eax_29, *(arg1 + 0x30)) - 1 s>= 0)
    int32_t var_24_1 = divs.dp.d(edx_16:eax_29, *(arg1 + 0x30))
    int32_t edi_1 = 0
    
    while (ebp_1[-7] != 0)
        if (divs.dp.d(sx.q((*(*ebp_1[-2] + 0x2c))()), *(ebp_1[-1] + 0x34)) - 1 s>= 0)
            int32_t ebx_1 = 0
            
            while (ebp_1[-7] != 0)
                sub_418a8c(*(ebp_1[-1] + 0x34), *(ebp_1[-1] + 0x30) * edi_1, 
                    *(ebp_1[-1] + 0x34) * ebx_1, &ebp_1[-0x10], *(ebp_1[-1] + 0x30))
                sub_42c124(sub_430bec(ebp_1[-2]), &ebp_1[-0xc], sub_430bec(ebp_1[-3]), 
                    &ebp_1[-0x10])
                sub_418a8c(*(ebp_1[-1] + 0x34), *(ebp_1[-1] + 0x30) * edi_1, 
                    *(ebp_1[-1] + 0x34) * ebx_1, &ebp_1[-0x10], *(ebp_1[-1] + 0x30))
                sub_42c124(sub_430bec(ebp_1[-4]), &ebp_1[-0xc], sub_430bec(ebp_1[-5]), 
                    &ebp_1[-0x10])
                int32_t ebx_2
                int32_t esi_4
                ebx_2, ebp_1, esi_4 = sub_466de8(ebp_1[-1], ebp_1[-3], ebp_1[-5])
                ebp_1[-7] -= 1
                ebx_1 = ebx_2 + 1
                
                if (esi_4 == 1)
                    break
        
        edi_1 += 1
        int32_t temp2_1 = ebp_1[-8]
        ebp_1[-8] -= 1
        
        if (temp2_1 == 1)
            break

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_467f39
return sub_467f19(ebp_1) __tailcall
