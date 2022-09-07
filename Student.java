 public class Student {

        // TODO: khai bao cac thuoc tinh cho Student
        private String name;
        private String id;
        private String group;
        private String email;
        // TODO: khai bao cac phuong thuc getter, setter cho Student
        public String getName() {
            return name;
        }

        public void setName(String name1) {
            this.name = name1;
        }

        public String getId() {
            return id;
        }

        public void setId(String id1) {
            this.id = id1;
        }

        public String getGroup() {
            return group;
        }

        public void setGroup(String group1) {
            this.group = group1;
        }

        public String getEmail() {
            return email;
        }

        public void setEmail(String email1) {
            this.email = email1;
        }
        /**
         * Constructor 1
         * @param
         */

        Student() {
            // TODO:
            this.name = "Student";
            this.id = "000";
            this.group = "K62CB";
            this.email = "uet@vnu.edu.vn";
        }

        /*
         * Constructor 2
         * @param
         * @param
         * @param
         */
        Student(String name, String id, String email) {
            // TODO:
            this.name = name;
            this.id = id;
            this.group = "K62CB";
            this.email = email;
        }

        /**
         * Constructor 3
         * @param
         */
        Student(Student s) {
            // TODO:
            this.name = s.getName();
            this.id = s.getId();
            this.group = s.getGroup();
            this.email = s.getEmail();
        }

        public String getInfo() {
            // TODO:
            String sum = name + " - " + id + " - " + group + " - " + email;
            return sum; // xoa dong nay sau khi cai dat
        }
}

