create database if not exists vikesh;
drop database if exists vk;
show databases;
show tables;
use vikesh;

create table student
(name varchar(20) not null,id int primary key,age int);

insert into student values("vikesh",200,18);
insert into student values("billu",201,18);
insert into student
(name,id,age) 
values
("vk",202,19),
("bk",203,20);

select * from student;
select name from student;
rename table std to student;