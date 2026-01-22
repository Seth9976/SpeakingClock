// 函数: sub_40cc60
// 地址: 0x40cc60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

MEMORY_BASIC_INFORMATION buffer
VirtualQuery(arg2, &buffer, 0x1c)
void filename
void* var_c

if (buffer.State != 0x1000)
    GetModuleFileNameA(data_4af7f4, &filename, 0x105)
    var_c = sub_40cc54(arg2)
else if (GetModuleFileNameA(buffer.AllocationBase, &filename, 0x105) != 0)
    var_c = arg2 - buffer.AllocationBase
else
    GetModuleFileNameA(data_4af7f4, &filename, 0x105)
    var_c = sub_40cc54(arg2)

void var_111
sub_409cd8(&var_111, sub_40dd80(&filename, 0x5c) + 1, 0x104)
void* const ebx_2 = &data_40cde0
void* const edi = &data_40cde0

if (sub_403df4(arg3, 0x407fd0) != 0)
    ebx_2 = sub_405018(arg3[1])
    void* eax_13 = sub_409c4c(ebx_2)
    
    if (eax_13 != 0 && *(ebx_2 + eax_13 - 1) != 0x2e)
        edi = &data_40cde4

char buffer_1[0x100]
LoadStringA(sub_405f54(data_4af7f4), *(data_4ac4a0 + 4), &buffer_1, 0x100)
void var_45c
sub_403b48(*arg3, &var_45c)
void* var_35c = &var_45c
char var_358 = 4
void* var_354 = &var_111
char var_350 = 6
void* var_34c = var_c
char var_348 = 5
void* const var_344 = ebx_2
char var_340 = 6
void* const var_33c = edi
char var_338 = 6
sub_40a33c(&buffer_1, arg4, arg1, 4, &var_35c)
return sub_409c4c(arg1)
