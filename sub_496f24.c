// 函数: sub_496f24
// 地址: 0x496f24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_12c = ebx
int32_t esi
int32_t var_130 = esi
int32_t edi
int32_t var_134 = edi
int32_t var_128 = 0
int32_t var_24 = 0
int32_t* var_138 = &var_4
int32_t (* var_13c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx
int32_t var_18 = edx
sub_421088()
int32_t eax_4 = (*(**(arg1 + 0x30) + 0x14))(ExceptionList, var_13c, var_138) - 1

if (eax_4 s>= 0)
    int32_t var_20_1 = eax_4 + 1
    int32_t var_c_1 = 0
    int32_t i
    
    do
        ebp_1[-2]
        void** eax_8 = (*(**(ebp_1[-1] + 0x30) + 0x18))(arg1)
        ebp_1[-5]
        sub_421088()
        int32_t ecx_3 = sub_404dec(sub_403b48(*eax_8, &ebp_1[-0x48]), &ebp_1[-0x48])
        ebp_1[-5]
        void* ebp_2 = sub_4228e0(ecx_3, ebp_1[-8])
        *(ebp_2 - 8)
        int32_t ecx_5 = (*(**(*(ebp_2 - 4) + 0x30) + 0xc))()
        *(ebp_2 - 0x14)
        ebp_1 = sub_4228e0(ecx_5, *(ebp_2 - 0x124))
        ebp_1[-5]
        sub_421090()
        void* eax_18 = sub_403ea8(*eax_8)
        void* eax_20 = sub_416064(eax_18)
        int16_t eax_21 = *(eax_20 + 8)
        
        if (eax_21 s> 0)
            ebp_1[-6] = sx.d(eax_21) * 4
            ebp_1[-4] = sub_402ea8(ebp_1[-6])
            int32_t* var_c_2 = ebp_1
            int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_1
            sub_416268(eax_18, ebp_1[-4])
            ebp_1[-5]
            sub_421088()
            int32_t edi_3 = sx.d(*(eax_20 + 8)) - 1
            
            if (edi_3 s>= 0)
                int32_t j_1 = edi_3 + 1
                ebp_1[-3] = 0
                int32_t j
                
                do
                    if (sub_4162bc(eax_8, *(ebp_1[-4] + (ebp_1[-3] << 2))) != 0)
                        ebp_1[-5]
                        sub_496e0c()
                    
                    ebp_1[-3] += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            ebp_1[-5]
            sub_421090()
            fsbase->NtTib.ExceptionList = ExceptionList_1
            int32_t var_c_3 = 0x497093
            ebp_1[-6]
            return sub_402ec4(ebp_1[-4])
        
        ebp_1[-2] += 1
        i = ebp_1[-7]
        ebp_1[-7] -= 1
    while (i != 1)

ebp_1[-5]
sub_421090()
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_4970cf
sub_404b88(&ebp_1[-0x49])
sub_404b88(&ebp_1[-8])
return &ebp_1[-8]
