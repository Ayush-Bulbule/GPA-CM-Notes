CREATE TABLE [dbo].[studentinfo]
(
	[Id] INT NOT NULL PRIMARY KEY IDENTITY, 
    [RegistrationNum] NCHAR(10) NULL, 
    [FullName] NCHAR(80) NULL, 
    [Gender] NCHAR(10) NULL, 
    [Address] NCHAR(500) NULL, 
    [Phone] NCHAR(15) NULL, 
    [Email] NCHAR(100) NULL, 
    [Stream] NCHAR(30) NULL, 
    [Sem] NCHAR(20) NULL, 
    [Age] NCHAR(10) NULL, 
    [Picture] IMAGE NULL
)
