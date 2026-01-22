// 函数: sub_496e58
// 地址: 0x496e58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_8 = 0
int32_t var_c = 0
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1 = arg2
sub_41ece4()

while (sub_41dc30(ebx_1) == 0)
    sub_41ece4()
    void* ebp_2
    int32_t* esi_2
    ebp_2, esi_2 = sub_41fa14(ebx_1, &ebp_1[-1])
    int32_t eax_5
    void* ebp_3
    eax_5, ebp_3 = sub_4195c0(*(ebp_2 - 4))
    *esi_2
    sub_4970d8(ebp_3 - 0xc, eax_5)
    void* esi_3
    ebx_1, ebp_1, esi_3 = sub_41fa14(arg2, ebp_3 - 8)
    sub_41ecec()
    sub_4972ec(esi_3, ebp_1[-3], ebp_1[-2])
    sub_41ece4()
    
    while (sub_41dc30(ebx_1) == 0)
        ebp_1[-3]
        sub_496e14()
    
    sub_41ecec()

sub_41ecec()
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_496f1d
return sub_404bac(&ebp_1[-2], 2)
