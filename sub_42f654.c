// 函数: sub_42f654
// 地址: 0x42f654
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HANDLE hEnh = GetClipboardData(0xe)

if (hEnh == 0)
    sub_42ca08(data_4ac30c)

sub_42edf0(arg1)
void* esi = arg1[0xa]
*(esi + 8) = CopyEnhMetaFileA(hEnh, nullptr)
void enhMetaHeader
GetEnhMetaFileHeader(*(esi + 8), 0x64, &enhMetaHeader)
int32_t var_50
int32_t var_48
*(esi + 0xc) = var_48 - var_50
int32_t var_4c
int32_t var_44
*(esi + 0x10) = var_44 - var_4c
*(esi + 0x18) = 0
arg1[0xb].b = 1
int32_t eax_9
eax_9.b = (*(*arg1 + 0x24))() != 0
*(arg1 + 0x22) = eax_9.b
return (*(*arg1 + 0x10))()
