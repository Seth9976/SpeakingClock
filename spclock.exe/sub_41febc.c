// 函数: sub_41febc
// 地址: 0x41febc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t var_14 = 0
int32_t var_10 = 0
int32_t* ebx_1 = arg1
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    sub_41f9d8(ebx_1, &var_14, sub_41f9d8(ebx_1, &var_10, (*(*ebx_1 + 0x28))()))

while (sub_41dc30(ebx_1) == 0)
    ebx_1, ebp_1 = sub_41fe74(ebx_1)

sub_41ecec()

while (true)
    bool eax_9
    int32_t edx_2
    eax_9, edx_2 = sub_41dc30(ebx_1)
    
    if (eax_9 != 0)
        break
    
    edx_2.b = 1
    sub_41febc()

sub_41ecec()
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_41ff5b
return sub_404bac(&ebp_1[-4], 2)
