// 函数: sub_4a1c8c
// 地址: 0x4a1c8c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1
int32_t ecx
eax_1, ecx = (*(**(arg1 + 0x3c4) + 0xdc))(ExceptionList, var_14, var_10)

if (eax_1 u< 1)
    MessageBeep(MB_OK)
else if (eax_1 - 1 u< 4)
    (*(**(arg1 + 0x3c4) + 0xdc))()
    sub_487de4(*(sub_4925ec(*(*data_4ac000 + 0x64)) + 0x50))
else if (eax_1 == 5)
    enum SND_FLAGS fdwSound = 0x20001
    HMODULE hmod = nullptr
    *(arg1 + 0x3ac)
    sub_4577d8(ecx, &var_8)
    PlaySoundA(sub_405018(var_8), hmod, fdwSound)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a1d31
int32_t* result = &var_8
sub_404b88(result)
return result
