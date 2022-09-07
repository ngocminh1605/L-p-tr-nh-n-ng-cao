public class StudentManagement {

    // TODO: khai bao thuoc tinh students la array chua cac doi tuong thuoc lop Student (max. 100)
    Student[] students = new Student[100];
    private int count = 0;

    public static boolean sameGroup(Student s1, Student s2) {
        // TODO:
        if ( s1.getGroup() == s2.getGroup() ) return true;
        else return false;
        // xoa dong nay sau khi cai dat
    }

    public void addStudent(Student newStudent){
        // TODO:
        students[count] = newStudent;
        count++;
    }

    public String studentsByGroup() {
        // TODO:
        String res = "";
        int dif = 0;
        boolean test = true;
        while (test) {
            String tmp = students[dif].getGroup();
            res = res + tmp + "\n";
            for (int i = 0; i < count; i++) {
                if (students[i].getGroup() == tmp) {
                    res = res + students[i].getInfo() + "\n";
                }
            }

            for (int i = dif; i < count; i++) {
                if (students[i].getGroup() != tmp) {
                    dif = i;
                    break;
                }
                if (i == count - 1)
                    test = false;
            }
        }
        return res;
    }

    public void removeStudent(String id) {
        // TODO:
        for (int i = 0; i < count; i++) {
            if (students[i].getId() == id) {
                students[i].setName("");
                students[i].setId("");
                students[i].setGroup("");
                students[i].setEmail("");
            }
        }
    }
}


