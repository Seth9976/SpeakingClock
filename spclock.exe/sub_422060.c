// 函数: sub_422060
// 地址: 0x422060
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int64_t* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_416dd4(arg1[-2].d, arg1[-1].d, &var_8)

if (var_8 != 0)
    sub_406550(&var_c)
    
    if (sub_40eb24(var_8, 0x42212c, &var_c) != 0)
        void* eax_10
        void* ecx_3
        eax_10, ecx_3 = (*(*var_c + 0xc))()
        var_10 = arg1
        ebp_1 = sub_421d24(eax_10, &var_10, ecx_3)
        var_c = ebp_1[2]
        sub_421940(var_c)
        esp = &var_8
        sub_420ef8(*(ebp_1[2] - 4), ebp_1[-3])
else
    sub_421940(arg1)
    esp = &ExceptionList
    *(arg1 - 4)
    sub_4229ec(arg1, 0xd)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_422124
sub_404b88(&ebp_1[-3])
sub_406550(&ebp_1[-2])
sub_406550(&ebp_1[-1])
return &ebp_1[-1]
