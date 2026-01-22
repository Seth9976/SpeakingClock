// 函数: sub_44faac
// 地址: 0x44faac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HMODULE hLibModule_1
HMODULE hLibModule = hLibModule_1
int32_t ebx
int32_t var_28 = ebx
int32_t var_20 = 0
int64_t* var_24 = nullptr
int32_t var_8 = 0
int32_t* var_2c = &hLibModule
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
char var_1a = 0
HMODULE hModule
GetKeyboardLayoutNameA(&hModule:2)
int32_t edx
edx.b = 1
int32_t* eax = sub_428a78(sub_42891c+0xa8, edx)
int32_t* var_38_1 = &hLibModule
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_428b18(eax, 0x80000002)
sub_404df8(&var_24, &hModule:2, 0xa)
sub_404ea0(&var_20, "\SYSTEM\CurrentControlSet\Control\Keyboard Layouts\", var_24)
void* ebp = sub_428ca4(eax, var_20)
int16_t x87control = sub_42911c(*(ebp - 0xc), "Layout File", ebp - 4)
uint32_t eax_7
void* ebp_1
eax_7, ebp_1 = sub_40ebe0(*(ebp - 4), SEM_NOOPENFILEERRORBOX, x87control)
*(ebp_1 - 8) = eax_7
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
void* const lpProcName = "KbdLayerDescriptor"
hModule = *(ebp_1 - 8)
int32_t eax_9 = GetProcAddress(hModule, lpProcName)
data_4ab848 = (*(eax_9(ExceptionList_2, var_10_1, ebp_1) + 0x28) & 1) == 1
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_44fb9f
hLibModule = *(ebp_1 - 8)
return FreeLibrary(hLibModule)
