// 函数: sub_40de50
// 地址: 0x40de50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4af8cc = 0x409
data_4af8d0 = 9
data_4af8d4 = 1
uint32_t eax = GetThreadLocale()

if (eax != 0)
    data_4af8cc = eax

if (eax.w != 0)
    data_4af8d0 = zx.d(eax.w) & 0x3ff
    data_4af8d4 = zx.d(eax.w) u>> 0xa

__builtin_memset(&data_4aa800, 0x40def4, 0x20)

if (data_4aa7bc s<= 4 || data_4aa7b8 != 2)
    int32_t eax_3
    eax_3.b = GetSystemMetrics(SM_MIDEASTENABLED) != 0
    data_4af8d9 = eax_3.b
else
    data_4af8d9 = 1

int32_t result = GetSystemMetrics(SM_DBCSENABLED)
int32_t ebx
ebx.b = result != 0
data_4af8d8 = ebx.b
int32_t __saved_ebp

if (ebx.b != 0)
    result = sub_40ddf4(&__saved_ebp)
return result
