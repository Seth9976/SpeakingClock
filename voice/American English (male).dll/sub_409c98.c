// 函数: sub_409c98
// 地址: 0x409c98
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

MEMORY_BASIC_INFORMATION buffer
VirtualQuery(arg2, &buffer, 0x1c)
void* var_c
int32_t ecx
uint8_t filename[0x105]

if (buffer.State != 0x1000)
    ecx = GetModuleFileNameA(data_414660, &filename, 0x105)
    var_c = sub_409c8c(arg2)
else
    uint32_t eax_1
    eax_1, ecx = GetModuleFileNameA(buffer.AllocationBase, &filename, 0x105)
    
    if (eax_1 != 0)
        var_c = arg2 - buffer.AllocationBase
    else
        ecx = GetModuleFileNameA(data_414660, &filename, 0x105)
        var_c = sub_409c8c(arg2)
void var_111
sub_407094(&var_111, sub_40ab18(ecx, 0x5c) + 1, 0x104)
void* const ebx_2 = &data_409e18
void* const edi = &data_409e18

if (sub_40303c(arg3, 0x405d14) != 0)
    ebx_2 = sub_403e88(arg3[1])
    int32_t eax_12 = sub_40706c(ebx_2)
    
    if (eax_12 != 0 && *(ebx_2 + eax_12 - 1) != 0x2e)
        edi = &data_409e1c

char buffer_1[0x100]
LoadStringA(sub_404980(data_414660), *(data_413570 + 4), &buffer_1, 0x100)
void var_45c
sub_402e28(*arg3, &var_45c)
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
sub_4075b4(&buffer_1, arg4, arg1, 4, &var_35c)
return sub_40706c(arg1)
