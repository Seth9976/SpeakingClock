// 函数: sub_464d28
// 地址: 0x464d28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = data_4ac4e0

if (*(result + 0xc) == 0)
    return result

uint32_t uMode = SetErrorMode(SEM_NOOPENFILEERRORBOX)
int32_t __saved_ebp
int32_t* var_10_1 = &__saved_ebp
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_4b1c9c == 0)
    data_4b1c9c = GetProcAddress(GetModuleHandleA("USER32"), "WINNLSEnableIME")

if (data_4ab990 == 0)
    data_4ab990 = LoadLibraryA("imm32.dll")
    
    if (data_4ab990 != 0)
        data_4b1ca0 = GetProcAddress(data_4ab990, "ImmGetContext")
        data_4b1ca4 = GetProcAddress(data_4ab990, "ImmReleaseContext")
        data_4b1ca8 = GetProcAddress(data_4ab990, "ImmGetConversionStatus")
        data_4b1cac = GetProcAddress(data_4ab990, "ImmSetConversionStatus")
        data_4b1cb0 = GetProcAddress(data_4ab990, "ImmSetOpenStatus")
        data_4b1cb4 = GetProcAddress(data_4ab990, "ImmSetCompositionWindow")
        data_4b1cb8 = GetProcAddress(data_4ab990, "ImmSetCompositionFontA")
        data_4b1cbc = GetProcAddress(data_4ab990, "ImmGetCompositionStringA")
        data_4b1cc0 = GetProcAddress(data_4ab990, "ImmIsIME")
        data_4b1cc4 = GetProcAddress(data_4ab990, "ImmNotifyIME")

fsbase->NtTib.ExceptionList = ExceptionList
void* const var_10_2 = &data_464e95
return SetErrorMode(uMode)
